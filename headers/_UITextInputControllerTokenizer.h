
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {

    UITextInputController _textInput;
    ^{__CFStringTokenizer=} _tokenizer;
    int _tokenizerType;
}

 - (void) dealloc;
 - (long long) _indexForTextPosition:(id)a;
 - (BOOL) _isDownstreamForDirection:(long long)aatPosition:(id)b;
 - ({_NSRange=QQ}) _getClosestTokenRangeForPosition:(id)agranularity:(long long)bdownstream:(BOOL)c;
 - (id) _positionFromPosition:(id)aoffset:(unsigned long long)baffinity:(long long)c;
 - (void) invalidateTokenizer;
 - (id) initWithTextInputController:(id)a;
 - (long long) _writingDirectionAtPosition:(id)a;


@end
