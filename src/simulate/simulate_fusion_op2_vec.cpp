#include "daScript/misc/platform.h"

#ifdef _MSC_VER
#pragma warning(disable:4505)
#endif

#include "daScript/simulate/simulate_fusion.h"
#include "daScript/simulate/sim_policy.h"
#include "daScript/ast/ast_typedecl.h"
#include "daScript/simulate/simulate_fusion_op2.h"
#include "daScript/simulate/simulate_fusion_op2_vec_settings.h"

// fake DAS_NODE to support regular eval
#define DAS_NODE(TYPE,CTYPE)                                    \
    virtual vec4f eval ( das::Context & context ) override {    \
        return compute(context);                                \
    }

namespace das {

    IMPLEMENT_OP2_NUMERIC_VEC(Add);
    IMPLEMENT_OP2_NUMERIC_VEC(Sub);
    IMPLEMENT_OP2_NUMERIC_VEC(Div);
    IMPLEMENT_OP2_NUMERIC_VEC(Mod);
    IMPLEMENT_OP2_NUMERIC_VEC(Mul);

    void createFusionEngine_op2_vec()
    {
        IMPLEMENT_OP2_NUMERIC_VEC(Add);
        IMPLEMENT_OP2_NUMERIC_VEC(Sub);
        IMPLEMENT_OP2_NUMERIC_VEC(Div);
        IMPLEMENT_OP2_NUMERIC_VEC(Mod);
        IMPLEMENT_OP2_NUMERIC_VEC(Mul);
    }
}


