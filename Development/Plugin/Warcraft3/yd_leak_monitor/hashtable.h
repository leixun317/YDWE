#pragma once

#include <functional>

namespace ht {
	void hashtableEachHandle(std::function<void(uint32_t, uint32_t, uint32_t, uint32_t)> cb);
}
