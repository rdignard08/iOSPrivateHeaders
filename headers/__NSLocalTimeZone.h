
@interface __NSLocalTimeZone : NSTimeZone {

}
 + (BOOL) supportsSecureCoding;

 - (Class) classForCoder;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (id) data;
 - (id) name;
 - (d) daylightSavingTimeOffsetForDate:(id)a;
 - (q) secondsFromGMTForDate:(id)a;
 - (id) abbreviationForDate:(id)a;
 - (BOOL) isDaylightSavingTimeForDate:(id)a;
 - (id) nextDaylightSavingTimeTransitionAfterDate:(id)a;
 - (id) localizedName:(q)alocale:(id)b;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
