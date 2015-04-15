
@interface UIKBSplitKeyplaneGenerator : NSObject {

    NSMutableArray* _rows;
    NSDictionary* _splitLayoutHints;
    UIKBTree* _sourceKeyboard;
    UIKBTree* _sourceKeyplane;
    {CGSize="width"d"height"d} _splitKeySizeFactor;
    {CGSize="width"d"height"d} _keyboardSize;
    double _leftSideWidestRow;
    double _rightSideWidestRow;
    long long _keyboardType;
    UIKeyboardSliceSet* _sliceSet;
    UIKeyboardTransitionSlice* _leftSlice;
    UIKeyboardTransitionSlice* _rightSlice;
}

 - (void) dealloc;
 - (id) generateRivenKeyplaneFromKeyplane:(id)a forKeyboard:(id)b ;
 - (id) keysOrderedByPosition;
 - (void) addSliceStart:({CGRect={CGPoint=dd}{CGSize=dd}})a end:({CGRect={CGPoint=dd}{CGSize=dd}})b startToken:(id)c endToken:(id)d left:(BOOL)e normalization:(int)f isDefaultWidth:(BOOL)g row:(int)h ;
 - (void) splitSpaceKey:(id)a leftSpace:(id)b left:({CGRect={CGPoint=dd}{CGSize=dd}})c right:({CGRect={CGPoint=dd}{CGSize=dd}})d ;
 - (void) addKey:(id)a withShape:(id)b forRow:(id)c attribs:(id)d left:(BOOL)e force:(BOOL)f isDefaultWidth:(BOOL)g ;
 - (void) commitUncommittedSlices;
 - (void) alignSpaceKeyEdges;
 - (id) hintsForRow:(id)a ;
 - (void) initializeGeneratorForKeyplane:(id)a name:(id)b ;
 - (void) organizeKeyplaneIntoRows;
 - (void) splitRow:(id)a ;
 - (id) finalizeSplitKeyplane;
 - (id) init;


@end
