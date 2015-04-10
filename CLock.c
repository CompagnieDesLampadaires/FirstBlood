#include <time.h>

void Alarm (jour, heure, minute) {
	while (true) {
		if (getJour() == jour && getHeure() == heure && getMinute() == minute) break;
		sleep(60);
	}
	
	setScreen(blue);
	setSound(ring);
}
