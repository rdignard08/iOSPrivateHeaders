
@interface UIWebSelectionGraph : NSObject {

    @"NSMutableArray" _selectionNodes;
}

 - (void) dealloc;
 - (void) clearNodes;
 - (id) addNodeFromSelection:(id)a;
 - (void) exploreFromNode:(id)aoutwards:(BOOL)bmaxDepth:(i)c;
 - (void) exploreFromNode:(id)a;
 - (id) init;


@end
