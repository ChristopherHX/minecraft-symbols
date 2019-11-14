#include <pplx/pplx.h>

namespace pplx
{
    std::shared_ptr<pplx::scheduler_interface> _pplx_cdecl get_ambient_scheduler()
    {
        return nullptr;
    }
}