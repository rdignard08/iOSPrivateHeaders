
@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView {

    ^{CGImage=} _defaultKeyplaneImage;
    ^{CGImage=} _splitKeyplaneImage;
    @"CALayer" _leftKeys;
    @"CALayer" _rightKeys;
    @"CALayer" _spaceFill;
    @"NSMutableDictionary" _controlKeys;
    @"CALayer" _topEdgeHighlight;
    @"UIKBCacheToken" _keyplaneToken;
    q _orientation;
    {?="position"b1"slices"b1"backgroundAndShadows"b1"backgroundGradients"b1"topEdgeHighlight"b1"shiftKeys"b1"returnKeys"b1"moreIntlKeys"b1} _rebuildFlags;
}

 - (void) dealloc;
 - (void) updateWithProgress:(d)a;
 - (void) rebuildTransitionForSplitStyleChange:(id)a;
 - (void) transformForProgress:(d)a;
 - (^{CGImage=}) defaultKeyboardImage;
 - (^{CGImage=}) splitKeyboardImage;
 - (void) initializeLayers;
 - (void) rebuildFromKeyplane:(id)atoKeyplane:(id)bkeyboardType:(q)corientation:(q)d;
 - (void) rebuildControlKeys:(Q)a;
 - (BOOL) canDisplayTransition;
 - (void) rebuildMoreIntlKeys;
 - (void) rebuildShiftSlices;
 - (void) rebuildReturnSlices;
 - (void) updateTransition;
 - (void) _delayedUpdateTransition;
 - (void) setRebuildFlags;
 - (id) crossfadeOpacityAnimation;
 - (d) adjustedLeftWidthAtMergePoint;
 - (d) adjustedRightWidthAtMergePoint;
 - (void) rebuildTopEdgeHighlightTransition;
 - (void) rebuildShadows;
 - (^{CGImage=}) getKeyboardImageAsSplit:(BOOL)a;
 - (void) updateTransitionForSlice:(id)awithStart:(id)bstartContents:(id)cend:(id)dendContents:(id)eupdateContents:(BOOL)f;
 - (id) meshTransformForProgress:(d)a;
 - (void) rebuildPositionTransition;
 - (void) rebuildBackgroundAndShadowTransitions;
 - (void) rebuildBackgroundGradientTransitions;
 - (void) refreshKeyplaneImages;
 - (void) rebuildSliceTransitions;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setHidden:(BOOL)a;


@end
