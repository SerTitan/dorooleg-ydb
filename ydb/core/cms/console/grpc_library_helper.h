#pragma once

#include <library/cpp/grpc/server/grpc_server.h>
#include <library/cpp/actors/core/log_iface.h>

namespace NKikimr::NConsole {

void SetGRpcLibraryFunction();
void EnableGRpcTracersEnable();
void SetGRpcLibraryLogVerbosity(NActors::NLog::EPriority prio);

} // namespace NKikimr::NGRpcService
