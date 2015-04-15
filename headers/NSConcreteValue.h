
@interface NSConcreteValue : NSValue {

    Q _specialFlags;
    ^v typeInfo;
}
 + (BOOL) supportsSecureCoding;
 + (void) initialize;

 - (void) getValue:(^v)a;
 - (r^v) _value;
 - (BOOL) _matchType:(r*)asize:(Q)b;
 - (BOOL) isEqualToValue:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Q) hash;
 - (r*) objCType;
 - (void) encodeWithCoder:(id)a;


@end
