//#include "dfarow.ih"
//
//bool DFARow::hasPreAstates(size_t ruleIdx, size_t rowIdx) const
//{
//    vector<size_t> const &preA = (*d_rules)[ruleIdx].preAstates();
//
//    StateSet const &stateSet = (*d_stateSets)[rowIdx];
//
//    return find_if(stateSet.begin(), stateSet.end(), 
//            FnWrap::unary(stateOfRule, preA)) != stateSet.end();
//}
//
//
