/*!
 * @file Callback.cpp
 * @par Author & Doxygen Editor
 * 	Daniel Di Módica ~ <a href = "mailto: danifabriziodmodica@gmail.com">danifabriziodmodica@@gmail.com</a>
 * @date 05/07/2023 20:02:36
 */

#include "Callback.h"

extern std::list<Callback*> g_callbacklist;

Callback::Callback(void (*function)(void)) :
m_callback{function} {
	if (m_callback != nullptr) g_callbacklist.push_back(this);
}

void Callback::myCallback(void) {
	if (m_callback) m_callback();
}

Callback::~Callback() { }
