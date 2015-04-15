
@interface _UILegibilityLabel : _UILegibilityView {

    BOOL _usesSecondaryColor;
    NSString* _string;
    UIFont* _font;
}

 - (void) dealloc;
 - (id) string;
 - (void) setString:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setFont:(id)a;
 - (void) updateImage;
 - (BOOL) usesSecondaryColor;
 - (id) initWithSettings:(id)astrength:(double)bstring:(id)cfont:(id)doptions:(long long)e;
 - (id) initWithSettings:(id)astrength:(double)bstring:(id)cfont:(id)d;
 - (double) baselineOffset;
 - (id) font;


@end
