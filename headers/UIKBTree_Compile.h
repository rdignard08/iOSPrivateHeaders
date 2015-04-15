
@interface UIKBTree_Compile : UIKBTree {

    @"NSMutableDictionary" symbols;
    @"NSMutableDictionary" refs;
}
 + (id) treeOfType:(i)a;
 + (id) uniqueNameWithType:(i)a;
 + (id) stringEnumForType:(i)a;
 + (i) typeForString:(id)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isSameAsTree:(id)a;
 - (BOOL) _needsScaling;
 - (id) geometrySet:(BOOL)a;
 - (id) attributeSet:(BOOL)a;
 - (void) setSymbols:(id)a;
 - (void) setRefs:(id)a;
 - (id) symbols;
 - (id) refs;
 - (void) setVariable:(BOOL)a;
 - (void) mergePropertiesWithOthers:(id)a;
 - (BOOL) usesSymbols;
 - (id) symbolValues:(id)awithSymbols:(id)b;
 - (i) symbolHash:(id)a;
 - (i) shapeHash;
 - (id) simpleName;
 - (void) uniquifyName;
 - (id) listAtIndex:(i)a;
 - (void) setTarget:(id)aforReference:(id)b;
 - (i) indexOfSubtreeWithType:(i)a;
 - (i) indexOfSubtreeWithName:(id)arows:(id)b;
 - (void) mergeSubtreesWithOthers:(id)a;
 - (void) mergeSymbolsWithOthers:(id)a;
 - (void) mergePropertiesWithSubtreeRange:({_NSRange=QQ})aproperties:(id)b;
 - (i) subtreeHash;
 - (void) setGeometrySet:(id)a;
 - (void) setAttributeSet:(id)a;
 - (id) refList;
 - (BOOL) variable;
 - (id) initWithType:(i)a;


@end
