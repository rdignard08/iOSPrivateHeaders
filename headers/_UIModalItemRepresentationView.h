
@interface _UIModalItemRepresentationView : UIView {

    BOOL _useFakeEffectSource;
    UIView* _fakeEffectSourceView;
}

 - (void) layoutSubviews;
 - (void) setUseFakeEffectSource:(BOOL)a animated:(BOOL)b ;
 - (void) setUseFakeEffectSource:(BOOL)a ;
 - (BOOL) useFakeEffectSource;


@end
