
@protocol UIKBCacheableView;
@interface UIKBKeyView : UIView <UIKBCacheableView> {

    UIKBTree* m_keyplane;
    UIKBTree* m_key;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_drawFrame;
    ^{__CFBoolean=} m_allowsCaching;
    UIKBRenderConfig* m_renderConfig;
    CALayer* _keyBorders;
    CALayer* _keyBackgrounds;
    CALayer* _keyForegrounds;
    CALayer* _keyCaps;
    CALayer* _keyCapHint;
    int _renderedKeyState;
    NSString* _cachedTraitsHashString;
    BOOL _renderAsMask;
    UIKeyboardMenuView* _popupMenu;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) renderConfig;
 - (long long) didInputSubTree:(id)a ;
 - (id) contentsKeyView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - (id) subTreeHitTest:({CGPoint=dd})a ;
 - (void) willDisplayModalActionView:(id)a withSubTreeKeyView:(id)b completion:(@?)c ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) setRenderConfig:(id)a ;
 - (id) _generateBackdropMaskImage;
 - (void) _applyAppearanceInvocations;
 - (int) textEffectsVisibilityLevel;
 - (void) updateForKeyplane:(id)a key:(id)b ;
 - (void) setDrawFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) keyplane;
 - (id) cacheKey;
 - (double) cachedWidth;
 - (id) cacheKeysForRenderFlags:(id)a ;
 - (void) drawContentsOfRenderers:(id)a ;
 - (BOOL) cacheDeferable;
 - (BOOL) keepNonPersistent;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) variantFrame;
 - (void) setPopupMenu:(id)a ;
 - (void) dimKeyCaps:(double)a duration:(double)b ;
 - (void) _popuplateLayer:(id)a withContents:(id)b ;
 - (BOOL) _viewShouldBeOpaque;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) drawFrame;
 - (long long) cachedRenderFlags;
 - (BOOL) renderAsMask;
 - ({UIEdgeInsets=dddd}) displayInsets;
 - (id) cachedTraitsHashString;
 - (BOOL) requiresSublayers;
 - (BOOL) _shouldUpdateLayers;
 - (void) setCachedTraitsHashString:(id)a ;
 - (id) popupMenu;
 - (void) setRenderAsMask:(BOOL)a ;
 - (id) key;
 - (void) displayLayer:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
