
@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {

    double _widthRatio;
    double _offsetX;
    BOOL _transitionNeedsUpdate;
    BOOL _nonoverlappingCrossfade;
    BOOL _disableMeshOptimization;
    unsigned long long _animationType;
    NSArray* _startGeometries;
    NSArray* _endGeometries;
    NSArray* _commonVisibleKeys;
}

 - (void) dealloc;
 - (void) removeAllAnimations;
 - (void) updateWithProgress:(double)a;
 - (void) rebuildWithStartKeyplane:(id)astartView:(id)bendKeyplane:(id)cendView:(id)d;
 - (void) commitTransitionRebuild;
 - (double) transitionOverlapDelta;
 - (void) setAnimationType:(unsigned long long)a;
 - (void) setDisableMeshOptimization:(BOOL)a;
 - (void) setStartGeometries:(id)a;
 - (void) setEndGeometries:(id)a;
 - (id) sortedCommonVisibleKeys;
 - (void) setCommonVisibleKeys:(id)a;
 - (void) _updateTransition;
 - (BOOL) nonoverlappingCrossfade;
 - (unsigned long long) animationType;
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
