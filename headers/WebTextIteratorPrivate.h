
@interface WebTextIteratorPrivate : NSObject {

    {unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >="__ptr_"{__compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> >="__first_"^{TextIterator}}} _textIterator;
    {Vector<unsigned short, 0, WTF::CrashOnOverflow>="m_buffer"^S"m_capacity"I"m_size"I} _upconvertedText;
}
 + (void) initialize;

 - (id) .cxx_construct;
 - (void) .cxx_destruct;


@end
