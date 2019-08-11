#pragma once
#include "LM.h"

namespace Lumos
{
	class TimeStep;

	class LUMOS_EXPORT ISystem
	{
	public:
		ISystem() = default;
		virtual ~ISystem() = default;

		virtual void OnInit() = 0;
		virtual void OnUpdate(TimeStep* dt) = 0;
		virtual void OnIMGUI() = 0;
        
        inline const String& GetName() const { return m_DebugName; }

    protected:
        String m_DebugName;
	};
}