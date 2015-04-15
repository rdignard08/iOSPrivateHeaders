
@protocol UIKBCacheableView;
@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {

    @"UIKBTree" _keyplane;
    @"UIKBTree" _defaultKeyplane;
    @"UIKBCacheToken" _cacheToken;
    @"UIKBKeyView" _candidateGapView;
    @"NSMutableDictionary" _subviewIndex;
    @"NSMutableDictionary" _activeViewIndex;
    @"NSMutableDictionary" _renderedKeyViews;
    @"NSMutableDictionary" _delayedDeactivationKeys;
    @"NSTimer" _activatedTimer;
    BOOL _performingDeactivation;
    BOOL _shouldDrawRect;
    @"UIKBRenderConfig" _renderConfig;
    @"UIKBSplitImageView" _keyBorders;
    @"UIKBSplitImageView" _keyBackgrounds;
    @"UIKBSplitImageView" _keyCaps;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (id) viewForKey:(id)a;
 - (id) renderConfig;
 - (void) setRenderConfig:(id)a;
 - (void) setKeyplane:(id)a;
 - (id) keyplane;
 - (id) cacheKey;
 - (d) cachedWidth;
 - (id) cacheKeysForRenderFlags:(id)a;
 - (void) drawContentsOfRenderers:(id)a;
 - (BOOL) cacheDeferable;
 - (BOOL) keepNonPersistent;
 - (void) purgeSubviews;
 - (void) purgeKeyViews;
 - (void) setState:(i)aforKey:(id)b;
 - (i) stateForKey:(id)a;
 - (BOOL) validForKeyplane:(id)awithVisualStyle:(i)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)b;
 - (void) setDefaultKeyplane:(id)a;
 - (void) setCacheToken:(id)a;
 - (void) updateDecorationViewsIfNeeded;
 - (void) deactivateKeys;
 - (id) activeKeyViews;
 - (void) deactivateAdaptiveKey:(id)a;
 - (void) addKeyToDelayedDeactivationSet:(id)a;
 - (void) dimKeyCaps:(d)aduration:(d)b;
 - (BOOL) isPasscodeStyle;
 - (id) cacheToken;
 - (id) defaultKeyplane;
 - (i) cornerMaskForKey:(id)arecursive:(BOOL)b;
 - (void) cancelDelayedDeactivation;
 - (void) performDelayedDeactivation:(id)a;
 - (void) scheduleDelayedDeactivation;
 - (BOOL) _shouldAllowKey:(id)a;
 - (void) removeKeyFromDelayedDeactivationSet:(id)a;
 - (void) deactivateKey:(id)apreviousState:(i)b;
 - (id) containingViewForKey:(id)awithState:(i)b;
 - (id) cacheIdentifierForKey:(id)awithState:(i)b;
 - (Class) classForKey:(id)a;
 - (id) cacheIdentifierForKey:(id)a;
 - (id) viewForKey:(id)astate:(i)b;
 - (void) activateKeys;
 - (void) purgeLayerContents;
 - (void) removeFromSuperview;
 - (void) displayLayer:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
