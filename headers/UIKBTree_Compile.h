
@interface UIKBTree_Compile : UIKBTree {

    NSMutableDictionary* symbols;
    NSMutableDictionary* refs;
}
 + (id) treeOfType:(int)a;
 + (id) uniqueNameWithType:(int)a;
 + (id) stringEnumForType:(int)a;
 + (int) typeForString:(id)a;

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
 - (int) symbolHash:(id)a;
 - (int) shapeHash;
 - (id) simpleName;
 - (void) uniquifyName;
 - (id) listAtIndex:(int)a;
 - (void) setTarget:(id)aforReference:(id)b;
 - (int) indexOfSubtreeWithType:(int)a;
 - (int) indexOfSubtreeWithName:(id)arows:(id)b;
 - (void) mergeSubtreesWithOthers:(id)a;
 - (void) mergeSymbolsWithOthers:(id)a;
 - (void) mergePropertiesWithSubtreeRange:({_NSRange=QQ})aproperties:(id)b;
 - (int) subtreeHash;
 - (void) setGeometrySet:(id)a;
 - (void) setAttributeSet:(id)a;
 - (id) refList;
 - (BOOL) variable;
 - (id) initWithType:(int)a;


@end
