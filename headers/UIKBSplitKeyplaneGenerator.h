
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
 - (id) generateRivenKeyplaneFromKeyplane:(id)aforKeyboard:(id)b;
 - (id) keysOrderedByPosition;
 - (void) addSliceStart:({CGRect={CGPoint=dd}{CGSize=dd}})aend:({CGRect={CGPoint=dd}{CGSize=dd}})bstartToken:(id)cendToken:(id)dleft:(BOOL)enormalization:(int)fisDefaultWidth:(BOOL)grow:(int)h;
 - (void) splitSpaceKey:(id)aleftSpace:(id)bleft:({CGRect={CGPoint=dd}{CGSize=dd}})cright:({CGRect={CGPoint=dd}{CGSize=dd}})d;
 - (void) addKey:(id)awithShape:(id)bforRow:(id)cattribs:(id)dleft:(BOOL)eforce:(BOOL)fisDefaultWidth:(BOOL)g;
 - (void) commitUncommittedSlices;
 - (void) alignSpaceKeyEdges;
 - (id) hintsForRow:(id)a;
 - (void) initializeGeneratorForKeyplane:(id)aname:(id)b;
 - (void) organizeKeyplaneIntoRows;
 - (void) splitRow:(id)a;
 - (id) finalizeSplitKeyplane;
 - (id) init;


@end
