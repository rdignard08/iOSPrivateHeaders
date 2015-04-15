
@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {

    d _widthRatio;
    d _offsetX;
    BOOL _transitionNeedsUpdate;
    BOOL _nonoverlappingCrossfade;
    BOOL _disableMeshOptimization;
    Q _animationType;
    @"NSArray" _startGeometries;
    @"NSArray" _endGeometries;
    @"NSArray" _commonVisibleKeys;
}

 - (void) dealloc;
 - (void) removeAllAnimations;
 - (void) updateWithProgress:(d)a;
 - (void) rebuildWithStartKeyplane:(id)astartView:(id)bendKeyplane:(id)cendView:(id)d;
 - (void) commitTransitionRebuild;
 - (d) transitionOverlapDelta;
 - (void) setAnimationType:(Q)a;
 - (void) setDisableMeshOptimization:(BOOL)a;
 - (void) setStartGeometries:(id)a;
 - (void) setEndGeometries:(id)a;
 - (id) sortedCommonVisibleKeys;
 - (void) setCommonVisibleKeys:(id)a;
 - (void) _updateTransition;
 - (BOOL) nonoverlappingCrossfade;
 - (Q) animationType;
 - (id) meshTransformForKeyplane:(id)atoKeyplane:(id)b;
 - (void) updateTransitionIfNeeded;
 - (id) startGeometries;
 - (id) endGeometries;
 - (id) commonVisibleKeys;
 - (BOOL) disableMeshOptimization;
 - (id) geometriesForKeyplane:(id)a;
 - (id) symmetricMeshTransformForKeyplane:(id)a;
 - (void) setNonoverlappingCrossfade:(BOOL)a;


@end
