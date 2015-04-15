
@interface UIBlurEffect : UIVisualEffect {

    long long _style;
}
 + (BOOL) supportsSecureCoding;
 + (id) effectWithStyle:(long long)a;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (long long) _style;
 - (id) effectSettings;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
