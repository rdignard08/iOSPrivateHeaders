
@interface NSLinkCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    @"NSURL" _url;
}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (id) initWithRange:({_NSRange=QQ})aURL:(id)b;
 - (id) description;
 - (void) dealloc;
 - (id) URL;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (Q) resultType;


@end
