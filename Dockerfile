FROM ubuntu:18.04

MAINTAINER helpacksi <oo.helpacksi@gmail.com>

#----- Install packages -----
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    openssl 
    libssl-dev  \
    libcurl4-openssl-dev \
    zlib1g-dev \
    libpng-dev  \
    libxml2-dev  \
    libjson-c-dev  \
    libbz2-dev  \
    libpcre3-dev  \
    ncurses-dev \
    xz-utils \
    vim \
    curl \
    build-esstential \
    libxml2-devi \ 
    libcurl4-openssl-dev \
    openjdk-8-jdk       \
    git maven bc        \
    openssh-server wget \
    build-essential     && \
    apt-get clean  && \
    rm -rf /var/lib/apt/lists/*

#----- INSTALL ANACONDA (MINICONDA) -----
RUN curl -LO http://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
RUN bash Miniconda3-latest-Linux-x86_64.sh -p /opt/miniconda -b
RUN rm Miniconda3-latest-Linux-x86_64.sh
ENV PATH=/opt/miniconda/bin:${PATH}
RUN conda update -y conda
RUN conda install -c anaconda -y pip 


#----- INSTALL CLANG -----
RUN curl -SL https://github.com/llvm/llvm-project/releases/download/llvmorg-10.0.0/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04.tar.xz | tar -xJC . && \
    mv clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04 /opt/LLVM10

#----- INSTALL PYTHON DEPENDENCIES-----
RUN pip install setuptools && \
    pip install numpy scipy && \
    pandas networkx tqdm matplotlib && \
    graphviz pydot scikit-learn && \
    nltk deepwalk gensim pydotplus tabulate

# ----- Get a reasonable .vimrc -----
RUN wget -O /root/.vimrc  https://raw.githubusercontent.com/rahlk/Antara/docker/.vimrc.template

#----- Get a reasonable .bashrc -----
RUN wget -O /root/.bashrc https://raw.githubusercontent.com/rahlk/Antara/docker/.bashrc.template

# ----- Update git credentials -----
RUN git config --global user.name "helpacksi" && \
    git config --global user.email "oo.helpacksi@gmail.com"

CMD ["sh -c bash"]
