#pragma once

#include "../ecs.h"
#include <vector>

namespace runtime
{
class scene_graph : public core::subsystem
{
public:
	bool initialize();
	void dispose();
	//-----------------------------------------------------------------------------
	//  Name : frame_update (virtual )
	/// <summary>
	///
	///
	///
	/// </summary>
	//-----------------------------------------------------------------------------
	void frame_update(std::chrono::duration<float> dt);

	//-----------------------------------------------------------------------------
	//  Name : getRoots ()
	/// <summary>
	///
	///
	///
	/// </summary>
	//-----------------------------------------------------------------------------
	const std::vector<entity>& get_roots() const
	{
		return _roots;
	}

private:
	/// scene roots
	std::vector<entity> _roots;
};
}
