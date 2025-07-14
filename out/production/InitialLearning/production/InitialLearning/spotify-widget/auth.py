import spotipy
from spotipy.oauth2 import SpotifyOAuth

sp = spotipy.Spotify(auth_manager=SpotifyOAuth(
    client_id="4a8e257c5eb14f469cfe786051f3196d",
    client_secret="ead86ac99ad641668eff99a01b0b1001",
    redirect_uri="http://127.0.0.1:8888/callback",
    scope="user-read-currently-playing user-read-playback-state"
))

print("Access token:", sp.auth_manager.get_access_token(as_dict=False))
