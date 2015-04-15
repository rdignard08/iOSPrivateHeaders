
@interface NSConcreteValue : NSValue {

    unsigned long long _specialFlags;
    ^v typeInfo;
}
 + (BOOL) supportsSecureCoding;
 + (void) initialize;

 - (void) getValue:(^v)a ;
 - (r^v) _value;
 - (BOOL) _matchType:(r*)a size:(unsigned long long)b ;
 - (BOOL) isEqualToValue:(id)a ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (unsigned long long) hash;
 - (r*) objCType;
 - (void) encodeWithCoder:(id)a ;


@end
