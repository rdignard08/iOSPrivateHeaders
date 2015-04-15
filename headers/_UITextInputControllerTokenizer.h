
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {

    @"UITextInputController" _textInput;
    ^{__CFStringTokenizer=} _tokenizer;
    i _tokenizerType;
}

 - (void) dealloc;
 - (q) _indexForTextPosition:(id)a;
 - (BOOL) _isDownstreamForDirection:(q)aatPosition:(id)b;
 - ({_NSRange=QQ}) _getClosestTokenRangeForPosition:(id)agranularity:(q)bdownstream:(BOOL)c;
 - (id) _positionFromPosition:(id)aoffset:(Q)baffinity:(q)c;
 - (void) invalidateTokenizer;
 - (id) initWithTextInputController:(id)a;
 - (q) _writingDirectionAtPosition:(id)a;


@end
