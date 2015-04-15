
@interface NSNumber : NSValue {

}
 + (id) numberWithItemIdentifier:(unsigned long long)a;
 + (BOOL) supportsSecureCoding;
 + (id) numberWithUnsignedLongLong:(unsigned long long)a;
 + (id) numberWithFloat:(float)a;
 + (id) numberWithChar:(char)a;
 + (id) numberWithUnsignedChar:(unsigned char)a;
 + (id) numberWithShort:(short)a;
 + (id) numberWithUnsignedShort:(unsigned short)a;
 + (id) numberWithUnsignedInt:(unsigned int)a;
 + (id) numberWithLong:(long long)a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) numberWithInt:(int)a;
 + (id) numberWithLongLong:(long long)a;
 + (id) numberWithInteger:(long long)a;
 + (id) numberWithBool:(BOOL)a;
 + (id) numberWithUnsignedInteger:(unsigned long long)a;
 + (id) numberWithDouble:(double)a;
 + (id) numberWithUnsignedLong:(unsigned long long)a;

 - (id) MPMediaLibraryDataProviderSystemML3CoercedString;
 - (id) ml_stringValueForSQL;
 - (void) ml_bindToSQLiteStatement:(^{sqlite3_stmt=})aatPosition:(int)b;
 - (unsigned long long) itemIdentifierValue;
 - (id) initWithItemIdentifier:(unsigned long long)a;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLType;
 - (id) CA_addValue:(id)amultipliedBy:(int)b;
 - (id) CA_interpolateValue:(id)abyFraction:(float)b;
 - (id) CA_roundToIntegerFromValue:(id)a;
 - (double) CA_distanceToValue:(id)a;
 - (id) CA_interpolateValues:(id)ainterpolator:(id)b;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (Class) classForCoder;
 - (BOOL) _allowsDirectEncoding;
 - (unsigned short) unsignedShortValue;
 - (unsigned char) unsignedCharValue;
 - (id) initWithUnsignedShort:(unsigned short)a;
 - (id) initWithShort:(short)a;
 - (id) initWithUnsignedLongLong:(unsigned long long)a;
 - (id) initWithLongLong:(long long)a;
 - (id) initWithUnsignedLong:(unsigned long long)a;
 - (id) initWithLong:(long long)a;
 - (id) initWithUnsignedInt:(unsigned int)a;
 - (id) initWithInt:(int)a;
 - (id) initWithFloat:(float)a;
 - (id) initWithDouble:(double)a;
 - (id) initWithUnsignedChar:(unsigned char)a;
 - (id) initWithChar:(char)a;
 - (id) initWithBool:(BOOL)a;
 - ({?=b8b4b1b1b18[8S]}) decimalValue;
 - (id) initWithInteger:(long long)a;
 - (id) initWithUnsignedInteger:(unsigned long long)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (BOOL) boolValue;
 - (long long) _cfNumberType;
 - (unsigned char) _getValue:(^v)aforType:(long long)b;
 - (long long) compare:(id)a;
 - (long long) _reverseCompare:(id)a;
 - (double) doubleValue;
 - (BOOL) _getCString:(char*)alength:(int)bmultiplier:(double)c;
 - (BOOL) isNSNumber__;
 - (BOOL) isEqualToNumber:(id)a;
 - (id) descriptionWithLocale:(id)a;
 - (id) stringValue;
 - (long long) longValue;
 - (unsigned long long) unsignedLongValue;
 - (unsigned int) unsignedIntValue;
 - (char) charValue;
 - (short) shortValue;
 - (int) intValue;
 - (long long) longLongValue;
 - (float) floatValue;
 - (unsigned long long) unsignedLongLongValue;
 - (unsigned long long) unsignedIntegerValue;
 - (unsigned long long) _cfTypeID;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (long long) integerValue;


@end
