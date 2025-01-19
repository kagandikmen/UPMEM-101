# UPMEM-101

Welcome to the UPMEM-101 repository! 

## About

This space is dedicated to my exploring and experimenting with UPMEM's SDK while using this as an opportunity to create an easy-to-follow UPMEM tutorial.

For more information on UPMEM PDK, its documentation, and downloadable releases, please visit [this link](https://www.upmem.com/developer/). For more information on UPMEM in general, please visit [this link](https://www.upmem.com/).

## Setup

1. Download UPMEM SDK tarball for your system from [this link](https://sdk.upmem.com/)

2. Extract its content and (preferably) move it to a better place like `/usr/local/bin/`

3. Source the shell script `upmem_env.sh`, which sets necessary environment variables, in your `.bashrc` like:

```bash
source /usr/local/bin/upmem-sdk/upmem_env.sh > /dev/null
```

4. Restart your shell session for the changes to become effective

5. Test your setup using:

```bash
which dpu-lldb
```

which should, if correctly installed, return the path to the LLDB Debugger binary of UPMEM SDK

6. Clone this repository:

```bash
git clone https://github.com/kagandikmen/UPMEM-101.git
cd UPMEM-101
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.