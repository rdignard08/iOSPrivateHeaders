
@interface _UILegibilityLabel : _UILegibilityView {

    BOOL _usesSecondaryColor;
    @"NSString" _string;
    @"UIFont" _font;
}

 - (void) dealloc;
 - (id) string;
 - (void) setString:(id)a;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) setFont:(id)a;
 - (void) updateImage;
 - (BOOL) usesSecondaryColor;
 - (id) initWithSettings:(id)astrength:(d)bstring:(id)cfont:(id)doptions:(q)e;
 - (id) initWithSettings:(id)astrength:(d)bstring:(id)cfont:(id)d;
 - (d) baselineOffset;
 - (id) font;


@end
