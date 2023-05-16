
#include "minidocx.hpp"
#include <iostream>

using namespace docx;

int main()
{
  Document doc("./text_frame.docx");

  auto frame = doc.AppendTextFrame(CM2Twip(12), CM2Twip(0.5));
  frame.AppendRun("我就是那个可有可无的不大不小的文本框，你能看到我么。哈哈哈哈哈");
//  frame.SetPositionX(TextFrame::Position::Left, TextFrame::Anchor::Page);
//  frame.SetPositionY(TextFrame::Position::Top, TextFrame::Anchor::Margin);
  frame.SetPositionX(CM2Twip(1), TextFrame::Anchor::Margin);
  frame.SetPositionY(CM2Twip(1), TextFrame::Anchor::Margin);
  frame.SetTextWrapping(TextFrame::Wrapping::Around);

  doc.Save();
  return 0;
}
