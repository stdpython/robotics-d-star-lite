/**
 * Robot Widget.
 *
 * @package		DStarLite
 * @author		Aaron Zampaglione <azampagl@gmail.com>
 * @copyright	Copyright (C) 2011 Aaron Zampaglione
 * @license		MIT
 */
#ifndef DSTARLITE_WIDGET_ROBOT_H
#define DSTARLITE_WIDGET_ROBOT_H

#include "widget_base.h"

namespace DStarLite
{
	class RobotWidget : public BaseWidget
	{
		public:

			int scan_radius;

			list<Map::Cell*> path_planned;

			RobotWidget(int x, int y, int w, int h) : BaseWidget(x, y, w, h){}

			/*
			 * @var  unsigned char*  data
			 */
			void draw();
	};
};

#endif // DSTARLITE_WIDGET_BASE_H