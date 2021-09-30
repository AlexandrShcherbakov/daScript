
.. _stdlib_functional:

==============================
Functional programming library
==============================

.. include:: detail/functional.rst

The functional module implements a collection of high-order functions and patters to expose functional programming patters to daScript.

All functions and symbols are in "functional" module, use require to get access to it. ::

    require daslib/functional

+++++++++++++
Uncategorized
+++++++++++++

.. _function-_at_functional_c__c_all_C.:

.. das:function:: all(it: auto const)

all returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+it      +auto const   +
+--------+-------------+


|function-functional-all|

.. _function-_at_functional_c__c_any_C.:

.. das:function:: any(it: auto const)

any returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+it      +auto const   +
+--------+-------------+


|function-functional-any|

.. _function-_at_functional_c__c_count_i_i:

.. das:function:: count(start: int; step: int)

count returns iterator<int>

+--------+-------------+
+argument+argument type+
+========+=============+
+start   +int          +
+--------+-------------+
+step    +int          +
+--------+-------------+


|function-functional-count|

.. _function-_at_functional_c__c_cycle_1_ls_Y_ls_TT_gr_._gr_G:

.. das:function:: cycle(src: iterator<auto(TT)>)

cycle returns auto

+--------+------------------+
+argument+argument type     +
+========+==================+
+src     +iterator<auto(TT)>+
+--------+------------------+


|function-functional-cycle|

.. _function-_at_functional_c__c_echo_._Cs:

.. das:function:: echo(x: auto; extra: string const)

echo returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+x       +auto         +
+--------+-------------+
+extra   +string const +
+--------+-------------+


|function-functional-echo|

.. _function-_at_functional_c__c_filter_1_ls_Y_ls_TT_gr_._gr_G_CN_ls_what_gr_0_ls_CY_ls_TT_gr_L_gr_1_ls_b_gr__at_:

.. das:function:: filter(src: iterator<auto(TT)>; blk: lambda<(what:TT const -&):bool> const)

filter returns auto

+--------+----------------------------------+
+argument+argument type                     +
+========+==================================+
+src     +iterator<auto(TT)>                +
+--------+----------------------------------+
+blk     +lambda<(what:TT const):bool> const+
+--------+----------------------------------+


|function-functional-filter|

.. _function-_at_functional_c__c_filter_1_ls_Y_ls_TT_gr_._gr_G_CN_ls_what_gr_0_ls_CY_ls_TT_gr_L_gr_1_ls_b_gr__at__at_:

.. das:function:: filter(src: iterator<auto(TT)>; blk: function<(what:TT const -&):bool> const)

filter returns auto

+--------+------------------------------------+
+argument+argument type                       +
+========+====================================+
+src     +iterator<auto(TT)>                  +
+--------+------------------------------------+
+blk     +function<(what:TT const):bool> const+
+--------+------------------------------------+


|function-functional-filter|

.. _function-_at_functional_c__c_is_equal_C._C.:

.. das:function:: is_equal(a: auto const; b: auto const)

is_equal returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+a       +auto const   +
+--------+-------------+
+b       +auto const   +
+--------+-------------+


|function-functional-is_equal|

.. _function-_at_functional_c__c_is_not_equal_C._C.:

.. das:function:: is_not_equal(a: auto const; b: auto const)

is_not_equal returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+a       +auto const   +
+--------+-------------+
+b       +auto const   +
+--------+-------------+


|function-functional-is_not_equal|

.. _function-_at_functional_c__c_islice_1_ls_Y_ls_TT_gr_._gr_G_Ci_Ci:

.. das:function:: islice(src: iterator<auto(TT)>; start: int const; stop: int const)

islice returns auto

+--------+------------------+
+argument+argument type     +
+========+==================+
+src     +iterator<auto(TT)>+
+--------+------------------+
+start   +int const         +
+--------+------------------+
+stop    +int const         +
+--------+------------------+


|function-functional-islice|

.. _function-_at_functional_c__c_map_1_ls_Y_ls_TT_gr_._gr_G_CN_ls_what_gr_0_ls_CY_ls_TT_gr_L_gr_1_ls_Y_ls_QQ_gr_._gr__at_:

.. das:function:: map(src: iterator<auto(TT)>; blk: lambda<(what:TT const -&):auto(QQ)> const)

map returns auto

+--------+--------------------------------------+
+argument+argument type                         +
+========+======================================+
+src     +iterator<auto(TT)>                    +
+--------+--------------------------------------+
+blk     +lambda<(what:TT const):auto(QQ)> const+
+--------+--------------------------------------+


|function-functional-map|

.. _function-_at_functional_c__c_map_1_ls_Y_ls_TT_gr_._gr_G_CN_ls_what_gr_0_ls_CY_ls_TT_gr_L_gr_1_ls_Y_ls_QQ_gr_._gr__at__at_:

.. das:function:: map(src: iterator<auto(TT)>; blk: function<(what:TT const -&):auto(QQ)> const)

map returns auto

+--------+----------------------------------------+
+argument+argument type                           +
+========+========================================+
+src     +iterator<auto(TT)>                      +
+--------+----------------------------------------+
+blk     +function<(what:TT const):auto(QQ)> const+
+--------+----------------------------------------+


|function-functional-map|

.. _function-_at_functional_c__c_not_C.:

.. das:function:: not(x: auto const)

not returns auto

+--------+-------------+
+argument+argument type+
+========+=============+
+x       +auto const   +
+--------+-------------+


|function-functional-not|

.. _function-_at_functional_c__c_reduce_C1_ls_Y_ls_TT_gr_._gr_G_CN_ls_left;right_gr_0_ls_CY_ls_TT_gr_L;CY_ls_TT_gr_L_gr_1_ls_CY_ls_TT_gr_L_gr__builtin_:

.. das:function:: reduce(it: iterator<auto(TT)> const; blk: block<(left:TT const -&;right:TT const -&):TT const -&> const)

reduce returns auto

+--------+----------------------------------------------------+
+argument+argument type                                       +
+========+====================================================+
+it      +iterator<auto(TT)> const                            +
+--------+----------------------------------------------------+
+blk     +block<(left:TT const;right:TT const):TT const> const+
+--------+----------------------------------------------------+


|function-functional-reduce|

.. _function-_at_functional_c__c_reduce_C1_ls_Y_ls_TT_gr_._gr_G_CN_ls_left;right_gr_0_ls_CY_ls_TT_gr_L;CY_ls_TT_gr_L_gr_1_ls_CY_ls_TT_gr_L_gr__at_:

.. das:function:: reduce(it: iterator<auto(TT)> const; blk: lambda<(left:TT const -&;right:TT const -&):TT const -&> const)

reduce returns auto

+--------+-----------------------------------------------------+
+argument+argument type                                        +
+========+=====================================================+
+it      +iterator<auto(TT)> const                             +
+--------+-----------------------------------------------------+
+blk     +lambda<(left:TT const;right:TT const):TT const> const+
+--------+-----------------------------------------------------+


|function-functional-reduce|

.. _function-_at_functional_c__c_reduce_C1_ls_Y_ls_TT_gr_._gr_G_CN_ls_left;right_gr_0_ls_CY_ls_TT_gr_L;CY_ls_TT_gr_L_gr_1_ls_CY_ls_TT_gr_L_gr__at__at_:

.. das:function:: reduce(it: iterator<auto(TT)> const; blk: function<(left:TT const -&;right:TT const -&):TT const -&> const)

reduce returns auto

+--------+-------------------------------------------------------+
+argument+argument type                                          +
+========+=======================================================+
+it      +iterator<auto(TT)> const                               +
+--------+-------------------------------------------------------+
+blk     +function<(left:TT const;right:TT const):TT const> const+
+--------+-------------------------------------------------------+


|function-functional-reduce|

.. _function-_at_functional_c__c_repeat_CY_ls_TT_gr_._i:

.. das:function:: repeat(value: auto(TT) const; count: int)

repeat returns auto

+--------+--------------+
+argument+argument type +
+========+==============+
+value   +auto(TT) const+
+--------+--------------+
+count   +int           +
+--------+--------------+


|function-functional-repeat|

.. _function-_at_functional_c__c_sum_C1_ls_Y_ls_TT_gr_._gr_G:

.. das:function:: sum(it: iterator<auto(TT)> const)

sum returns auto

+--------+------------------------+
+argument+argument type           +
+========+========================+
+it      +iterator<auto(TT)> const+
+--------+------------------------+


|function-functional-sum|


