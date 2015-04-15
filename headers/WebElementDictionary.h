
@interface WebElementDictionary : NSDictionary {

    ^{HitTestResult={HitTestLocation={LayoutPoint={LayoutUnit=i}{LayoutUnit=i}}{IntRect={IntPoint=ii}{IntSize=ii}}{FloatPoint=ff}{FloatQuad={FloatPoint=ff}{FloatPoint=ff}{FloatPoint=ff}{FloatPoint=ff}}BB}{RefPtr<WebCore::Node>=^{Node}}{RefPtr<WebCore::Node>=^{Node}}{LayoutPoint={LayoutUnit=i}{LayoutUnit=i}}{LayoutPoint={LayoutUnit=i}{LayoutUnit=i}}{RefPtr<WebCore::Element>=^{Element}}{RefPtr<WebCore::Scrollbar>=^{Scrollbar}}B{unique_ptr<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > >, std::__1::default_delete<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > > >={__compressed_pair<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > *, std::__1::default_delete<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > > >=^{ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > >}}}} _result;
    NSMutableDictionary* _cache;
    NSMutableSet* _nilValues;
    BOOL _cacheComplete;
}
 + (void) initialize;
 + (void) initializeLookupTable;

 - (void) dealloc;
 - (void) finalize;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (id) keyEnumerator;
 - (id) _title;
 - (id) initWithHitTestResult:(r^{HitTestResult={HitTestLocation={LayoutPoint={LayoutUnit=i}{LayoutUnit=i}}{IntRect={IntPoint=ii}{IntSize=ii}}{FloatPoint=ff}{FloatQuad={FloatPoint=ff}{FloatPoint=ff}{FloatPoint=ff}{FloatPoint=ff}}BB}{RefPtr<WebCore::Node>=^{Node}}{RefPtr<WebCore::Node>=^{Node}}{LayoutPoint={LayoutUnit=i}{LayoutUnit=i}}{LayoutPoint={LayoutUnit=i}{LayoutUnit=i}}{RefPtr<WebCore::Element>=^{Element}}{RefPtr<WebCore::Scrollbar>=^{Scrollbar}}B{unique_ptr<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > >, std::__1::default_delete<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > > >={__compressed_pair<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > *, std::__1::default_delete<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > > >=^{ListHashSet<WTF::RefPtr<WebCore::Node>, 256, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > >}}}})a ;
 - (id) _domNode;
 - (id) _webFrame;
 - (id) _altDisplayString;
 - (id) _absoluteImageURL;
 - (id) _isSelected;
 - (id) _absoluteMediaURL;
 - (id) _spellingToolTip;
 - (id) _absoluteLinkURL;
 - (id) _targetWebFrame;
 - (id) _titleDisplayString;
 - (id) _textContent;
 - (id) _isLiveLink;
 - (id) _isContentEditable;
 - (id) _isInScrollBar;
 - (void) _fillCache;


@end
