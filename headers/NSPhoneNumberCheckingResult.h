
@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    NSString _phoneNumber;
    id _underlyingResult;
}

 - (id) resultByAdjustingRangesWithOffset:(long long)a;
 - (BOOL) _adjustRangesWithOffset:(long long)a;
 - (id) phoneNumber;
 - (^v) underlyingResult;
 - (id) initWithRange:({_NSRange=QQ})aphoneNumber:(id)b;
 - (id) initWithRange:({_NSRange=QQ})aphoneNumber:(id)bunderlyingResult:(^v)c;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (unsigned long long) resultType;


@end
