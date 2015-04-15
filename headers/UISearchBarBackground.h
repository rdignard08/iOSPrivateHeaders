
@protocol _UIBarPositioningInternal;
@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {

    @"UIColor" _barTintColor;
    @"NSMutableDictionary" _customBackgroundImages;
    @"NSMutableDictionary" _generatedBackgroundImages;
    q _barPosition;
    Q _searchBarStyle;
    b3 _barStyle;
    b3 _barTranslucence;
    b1 _usesEmbeddedAppearance;
    b1 _actingAsNavBar;
    b1 _usesContiguousBarBackground;
    I _barHasController;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (id) backgroundImage;
 - (void) _updateBackgroundImage;
 - (void) _setBarPosition:(q)a;
 - (void) setBarStyle:(q)a;
 - (q) barStyle;
 - (void) setTranslucent:(BOOL)a;
 - (void) setBarTintColor:(id)a;
 - (q) _barPosition;
 - (id) barTintColor;
 - (void) setUsesEmbeddedAppearance:(BOOL)a;
 - (void) setSearchBarStyle:(Q)a;
 - (void) _setBehavesAsIfSearchBarHasController:(BOOL)a;
 - (BOOL) _hasCustomBackgroundImage;
 - (void) setUsesContiguousBarBackground:(BOOL)a;
 - (void) _setBackgroundImage:(id)aforBarPosition:(q)bbarMetrics:(q)c;
 - (id) _backgroundImageForBarPosition:(q)abarMetrics:(q)b;
 - (BOOL) usesEmbeddedAppearance;
 - (Q) searchBarStyle;
 - (void) _updateBackgroundImageIfPossible;
 - (id) _createBackgroundImageForBarStyle:(q)aalpha:(d)b;
 - (id) backgroundImagePrompt;
 - (BOOL) usesContiguousBarBackground;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
