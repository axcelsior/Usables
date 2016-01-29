#ifndef INCLUDED_CHANNELS
#define INCLUDED_CHANNELS

#include <vector>
#include <string>
#include "Channel.h"


/*

		Statiska funktioner s� att alla klasser kan anv�nda kanalerna

*/

class Channels {


public:

	static void addChannel(Channel c);

	static bool isChannelActive(int ID);
	static void setActive(int ID, bool toggle, float holdlength);

	static void update();

	void loadChannels(std::string filename);
	

private:

	

};



#endif