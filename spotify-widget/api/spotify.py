# api/spotify.py
import os
import json
from spotipy import Spotify
from spotipy.oauth2 import SpotifyOAuth

def handler(request):
    sp = Spotify(auth_manager=SpotifyOAuth(
        client_id=os.environ["SPOTIFY_CLIENT_ID"],
        client_secret=os.environ["SPOTIFY_CLIENT_SECRET"],
        redirect_uri="http://127.0.0.1:8888/callback",
        scope="user-read-currently-playing"
    ))

    current = sp.currently_playing()

    if not current or not current.get("is_playing"):
        return {
            "statusCode": 200,
            "headers": {"Content-Type": "application/json"},
            "body": json.dumps({"status": "Not playing anything"})
        }

    track = current["item"]["name"]
    artist = ", ".join([a["name"] for a in current["item"]["artists"]])
    url = current["item"]["external_urls"]["spotify"]

    return {
        "statusCode": 200,
        "headers": {"Content-Type": "application/json"},
        "body": json.dumps({
            "track": track,
            "artist": artist,
            "url": url
        })
    }
