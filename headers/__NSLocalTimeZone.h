
@interface __NSLocalTimeZone : NSTimeZone {

}
 + (BOOL) supportsSecureCoding;

 - (Class) classForCoder;
 - (id) replacementObjectForPortCoder:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (id) data;
 - (id) name;
 - (double) daylightSavingTimeOffsetForDate:(id)a ;
 - (long long) secondsFromGMTForDate:(id)a ;
 - (id) abbreviationForDate:(id)a ;
 - (BOOL) isDaylightSavingTimeForDate:(id)a ;
 - (id) nextDaylightSavingTimeTransitionAfterDate:(id)a ;
 - (id) localizedName:(long long)a locale:(id)b ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
