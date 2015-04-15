
@protocol _UIBarPositioningInternal;
@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {

    UIColor _barTintColor;
    NSMutableDictionary _customBackgroundImages;
    NSMutableDictionary _generatedBackgroundImages;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    b3 _barStyle;
    b3 _barTranslucence;
    b1 _usesEmbeddedAppearance;
    b1 _actingAsNavBar;
    b1 _usesContiguousBarBackground;
    unsigned int _barHasController;
}

 - (void) dealloc;
 - (BOOL) isTranslucent;
 - (id) backgroundImage;
 - (void) _updateBackgroundImage;
 - (void) _setBarPosition:(long long)a;
 - (void) setBarStyle:(long long)a;
 - (long long) barStyle;
 - (void) setTranslucent:(BOOL)a;
 - (void) setBarTintColor:(id)a;
 - (long long) _barPosition;
 - (id) barTintColor;
 - (void) setUsesEmbeddedAppearance:(BOOL)a;
 - (void) setSearchBarStyle:(unsigned long long)a;
 - (void) _setBehavesAsIfSearchBarHasController:(BOOL)a;
 - (BOOL) _hasCustomBackgroundImage;
 - (void) setUsesContiguousBarBackground:(BOOL)a;
 - (void) _setBackgroundImage:(id)aforBarPosition:(long long)bbarMetrics:(long long)c;
 - (id) _backgroundImageForBarPosition:(long long)abarMetrics:(long long)b;
 - (BOOL) usesEmbeddedAppearance;
 - (unsigned long long) searchBarStyle;
 - (void) _updateBackgroundImageIfPossible;
 - (id) _createBackgroundImageForBarStyle:(long long)aalpha:(double)b;
 - (id) backgroundImagePrompt;
 - (BOOL) usesContiguousBarBackground;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
