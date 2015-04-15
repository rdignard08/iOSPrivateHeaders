
@protocol UIKBCacheableView;
@interface UIKBThemedView : UIView <UIKBCacheableView> {

    @"CALayer" _borders;
    @"CALayer" _background;
    BOOL _lightKeyboard;
    BOOL _active;
    BOOL _usePersistentCaching;
    i _style;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _cacheInsets;
}

 - (void) setActive:(BOOL)a;
 - (void) didMoveToWindow;
 - (void) layoutSubviews;
 - (BOOL) _canDrawContent;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})astyle:(i)b;
 - (BOOL) active;
 - (void) _setRenderConfig:(id)a;
 - (id) cacheKey;
 - (d) cachedWidth;
 - (id) cacheKeysForRenderFlags:(id)a;
 - (void) drawContentsOfRenderers:(id)a;
 - (BOOL) cacheDeferable;
 - (BOOL) keepNonPersistent;
 - (void) setCacheInsets:({UIEdgeInsets=dddd})a;
 - (void) setUsePersistentCaching:(BOOL)a;
 - ({UIEdgeInsets=dddd}) cacheInsets;
 - (void) _popuplateLayer:(id)awithContents:(id)b;
 - (id) borderFilterTypeForCurrentStyle;
 - (BOOL) _hasInsets;
 - (id) traitsForCurrentStyle;
 - (BOOL) usePersistentCaching;
 - (i) style;
 - (void) displayLayer:(id)a;
 - (void) setStyle:(i)a;


@end
