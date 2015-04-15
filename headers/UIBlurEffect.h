
@interface UIBlurEffect : UIVisualEffect {

    q _style;
}
 + (BOOL) supportsSecureCoding;
 + (id) effectWithStyle:(q)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (q) _style;
 - (id) effectSettings;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
