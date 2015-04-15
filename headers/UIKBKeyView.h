
@protocol UIKBCacheableView;
@interface UIKBKeyView : UIView <UIKBCacheableView> {

    @"UIKBTree" m_keyplane;
    @"UIKBTree" m_key;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} m_drawFrame;
    ^{__CFBoolean=} m_allowsCaching;
    @"UIKBRenderConfig" m_renderConfig;
    @"CALayer" _keyBorders;
    @"CALayer" _keyBackgrounds;
    @"CALayer" _keyForegrounds;
    @"CALayer" _keyCaps;
    @"CALayer" _keyCapHint;
    i _renderedKeyState;
    @"NSString" _cachedTraitsHashString;
    BOOL _renderAsMask;
    @"UIKeyboardMenuView" _popupMenu;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) renderConfig;
 - (q) didInputSubTree:(id)a;
 - (id) contentsKeyView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (id) subTreeHitTest:({CGPoint=dd})a;
 - (void) willDisplayModalActionView:(id)awithSubTreeKeyView:(id)bcompletion:(@?)c;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) setRenderConfig:(id)a;
 - (id) _generateBackdropMaskImage;
 - (void) _applyAppearanceInvocations;
 - (i) textEffectsVisibilityLevel;
 - (void) updateForKeyplane:(id)akey:(id)b;
 - (void) setDrawFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) keyplane;
 - (id) cacheKey;
 - (d) cachedWidth;
 - (id) cacheKeysForRenderFlags:(id)a;
 - (void) drawContentsOfRenderers:(id)a;
 - (BOOL) cacheDeferable;
 - (BOOL) keepNonPersistent;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) variantFrame;
 - (void) setPopupMenu:(id)a;
 - (void) dimKeyCaps:(d)aduration:(d)b;
 - (void) _popuplateLayer:(id)awithContents:(id)b;
 - (BOOL) _viewShouldBeOpaque;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) drawFrame;
 - (q) cachedRenderFlags;
 - (BOOL) renderAsMask;
 - ({UIEdgeInsets=dddd}) displayInsets;
 - (id) cachedTraitsHashString;
 - (BOOL) requiresSublayers;
 - (BOOL) _shouldUpdateLayers;
 - (void) setCachedTraitsHashString:(id)a;
 - (id) popupMenu;
 - (void) setRenderAsMask:(BOOL)a;
 - (id) key;
 - (void) displayLayer:(id)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
