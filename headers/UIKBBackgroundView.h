
@protocol UIKBCacheableView;
@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {

    UIKBTree* _keyplane;
    UITextInputTraits* _inputTraits;
    int _visualStyle;
    NSObject* _geometryCacheKey;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _splitLeftRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _splitLeftCacheRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _splitRightRect;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _splitRightCacheRect;
    int _topCorners;
    BOOL _isSplit;
    BOOL _centerFilled;
    BOOL _hasCandidateKeys;
    UIKBRenderConfig* _renderConfig;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) renderConfig;
 - (void) setRenderConfig:(id)a ;
 - (void) refreshStyleForKeyplane:(id)a inputTraits:(id)b ;
 - (void) setGeometryCacheKey:(id)a ;
 - (id) cacheKey;
 - (double) cachedWidth;
 - (id) cacheKeysForRenderFlags:(id)a ;
 - (void) drawContentsOfRenderers:(id)a ;
 - (BOOL) cacheDeferable;
 - (BOOL) keepNonPersistent;
 - (id) geometryCacheKey;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) displayLayer:(id)a ;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
