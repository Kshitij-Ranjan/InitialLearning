import json
import os
from spotipy import Spotify
from spotipy.oauth2 import SpotifyClientCredentials

def handler(request):
    sp = Spotify(auth_manager=SpotifyClientCredentials(
        client_id=os.environ["SPOTIPY_CLIENT_ID"],
        client_secret=os.environ["SPOTIPY_CLIENT_SECRET"]
    ))

    results = sp.search(q='artist:Taylor Swift', type='track', limit=1)
    track_info = results['tracks']['items'][0]

    response = {
        "track": track_info['name'],
        "artist": ", ".join([artist['name'] for artist in track_info['artists']]),
        "url": track_info['external_urls']['spotify']
    }

    return {
        "statusCode": 200,
        "headers": {"Content-Type": "application/json"},
        "body": json.dumps(response)
    }
