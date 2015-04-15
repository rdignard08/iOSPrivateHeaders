
@interface TIWordTokenizer : NSObject {

    @"NSString" m_string;
    {?="buffer"[64S]"theString"^{__CFString}"directUniCharBuffer"^S"directCStringBuffer"*"rangeToBuffer"{?="location"q"length"q}"bufferedRangeStart"q"bufferedRangeEnd"q} m_inlineBuffer;
    {_NSRange="location"Q"length"Q} m_tokenRange;
    {_NSRange="location"Q"length"Q} m_searchRange;
    unsigned long long m_bufferOffset;
}

 - (void) dealloc;
 - (id) init;
 - (void) setString:(id)awithSearchRange:({_NSRange=QQ})b;
 - ({_NSRange=QQ}) advanceToNextToken;
 - ({_NSRange=QQ}) rangeOfCurrentToken;
 - (id) allTokensForString:(id)a;


@end
