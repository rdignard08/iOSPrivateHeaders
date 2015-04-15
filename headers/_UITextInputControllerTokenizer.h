
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {

    UITextInputController* _textInput;
    ^{__CFStringTokenizer=} _tokenizer;
    int _tokenizerType;
}

 - (void) dealloc;
 - (long long) _indexForTextPosition:(id)a ;
 - (BOOL) _isDownstreamForDirection:(long long)a atPosition:(id)b ;
 - ({_NSRange=QQ}) _getClosestTokenRangeForPosition:(id)a granularity:(long long)b downstream:(BOOL)c ;
 - (id) _positionFromPosition:(id)a offset:(unsigned long long)b affinity:(long long)c ;
 - (void) invalidateTokenizer;
 - (id) initWithTextInputController:(id)a ;
 - (long long) _writingDirectionAtPosition:(id)a ;


@end
