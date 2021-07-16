#include "blurf.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void blurf::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a1_address0\" :  \"" << a1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a1_ce0\" :  \"" << a1_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a1_q0\" :  \"" << a1_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a1_address1\" :  \"" << a1_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a1_ce1\" :  \"" << a1_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a1_q1\" :  \"" << a1_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b1_address0\" :  \"" << b1_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b1_ce0\" :  \"" << b1_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b1_we0\" :  \"" << b1_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b1_d0\" :  \"" << b1_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

