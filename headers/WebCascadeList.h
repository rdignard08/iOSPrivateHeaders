
@interface WebCascadeList : NSArray {

    r^{Font={FontDescription={RefCountedArray<WTF::AtomicString>=^{AtomicString}}{RefPtr<WebCore::FontFeatureSettings>=^{FontFeatureSettings}}ffb1b1b2b1b1b1b8b3b1b1b2b2b2b2b4b2b2b1b7}{RefPtr<WebCore::FontGlyphs>=^{FontGlyphs}}ffBb2} _font;
    i _character;
    Q _count;
    {Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow>="m_buffer"^{RetainPtr<const __CTFontDescriptor *>}"m_capacity"I"m_size"I"m_inlineBuffer"[16{type="__lx"[8C]}]} _fontDescriptors;
}

 - (id) .cxx_construct;
 - (void) .cxx_destruct;
 - (Q) count;
 - (id) objectAtIndex:(Q)a;
 - (id) initWithFont:(r^{Font={FontDescription={RefCountedArray<WTF::AtomicString>=^{AtomicString}}{RefPtr<WebCore::FontFeatureSettings>=^{FontFeatureSettings}}ffb1b1b2b1b1b1b8b3b1b1b2b2b2b2b4b2b2b1b7}{RefPtr<WebCore::FontGlyphs>=^{FontGlyphs}}ffBb2})acharacter:(i)b;


@end
