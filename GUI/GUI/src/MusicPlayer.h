#pragma once

#include "../PlayerForm.h"
#include "Library.h"
#include "LibraryObjects.h"
#include "SFML/Audio.hpp"

using namespace System;
using namespace System::Diagnostics;

public ref class MusicPlayer {
public:
	MusicPlayer();
	Library^ getMusicLibrary();
	
	void playSong();
	void pauseSong();
	void seekSong(int value);
	void closeSong();
	void setVolume(int value);

	void setCurrentSong(Song _currentSong);
	void setCurrentAlbum(Album _currentAlbum);
	void setCurrentArtist(Artist _currentArtist);
	void setSelectedSong(Song newSelection);
	void setSelectedArtist(Artist^ newSelection);

	Song getSelectedSong();
	Artist^ getSelectedArtist();
	Song getCurrentSong();
	Album getCurrentAlbum();
	Artist getCurrentArtist();
private:
	sf::Music* playingSong;
	Library^ musicLibrary;
	Song currentSong;
	Album currentAlbum;
	Artist currentArtist;

	Artist^ selectedArtist;
	Song selectedSong;
	
	void setPlayingSong(std::string filepath);

};