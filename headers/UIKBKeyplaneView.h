
@protocol UIKBCacheableView;
@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {

    UIKBTree* _keyplane;
    UIKBTree* _defaultKeyplane;
    UIKBCacheToken* _cacheToken;
    UIKBKeyView* _candidateGapView;
    NSMutableDictionary* _subviewIndex;
    NSMutableDictionary* _activeViewIndex;
    NSMutableDictionary* _renderedKeyViews;
    NSMutableDictionary* _delayedDeactivationKeys;
    NSTimer* _activatedTimer;
    BOOL _performingDeactivation;
    BOOL _shouldDrawRect;
    UIKBRenderConfig* _renderConfig;
    UIKBSplitImageView* _keyBorders;
    UIKBSplitImageView* _keyBackgrounds;
    UIKBSplitImageView* _keyCaps;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (void) layoutSubviews;
 - (id) viewForKey:(id)a ;
 - (id) renderConfig;
 - (void) setRenderConfig:(id)a ;
 - (void) setKeyplane:(id)a ;
 - (id) keyplane;
 - (id) cacheKey;
 - (double) cachedWidth;
 - (id) cacheKeysForRenderFlags:(id)a ;
 - (void) drawContentsOfRenderers:(id)a ;
 - (BOOL) cacheDeferable;
 - (BOOL) keepNonPersistent;
 - (void) purgeSubviews;
 - (void) purgeKeyViews;
 - (void) setState:(int)a forKey:(id)b ;
 - (int) stateForKey:(id)a ;
 - (BOOL) validForKeyplane:(id)a withVisualStyle:(int)b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b ;
 - (void) setDefaultKeyplane:(id)a ;
 - (void) setCacheToken:(id)a ;
 - (void) updateDecorationViewsIfNeeded;
 - (void) deactivateKeys;
 - (id) activeKeyViews;
 - (void) deactivateAdaptiveKey:(id)a ;
 - (void) addKeyToDelayedDeactivationSet:(id)a ;
 - (void) dimKeyCaps:(double)a duration:(double)b ;
 - (BOOL) isPasscodeStyle;
 - (id) cacheToken;
 - (id) defaultKeyplane;
 - (int) cornerMaskForKey:(id)a recursive:(BOOL)b ;
 - (void) cancelDelayedDeactivation;
 - (void) performDelayedDeactivation:(id)a ;
 - (void) scheduleDelayedDeactivation;
 - (BOOL) _shouldAllowKey:(id)a ;
 - (void) removeKeyFromDelayedDeactivationSet:(id)a ;
 - (void) deactivateKey:(id)a previousState:(int)b ;
 - (id) containingViewForKey:(id)a withState:(int)b ;
 - (id) cacheIdentifierForKey:(id)a withState:(int)b ;
 - (Class) classForKey:(id)a ;
 - (id) cacheIdentifierForKey:(id)a ;
 - (id) viewForKey:(id)a state:(int)b ;
 - (void) activateKeys;
 - (void) purgeLayerContents;
 - (void) removeFromSuperview;
 - (void) displayLayer:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
